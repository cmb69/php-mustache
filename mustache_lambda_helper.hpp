
#ifndef PHP_MUSTACHE_LAMBDA_HELPER_HPP
#define PHP_MUSTACHE_LAMBDA_HELPER_HPP

#include <mustache/mustache.hpp>
#include <mustache/renderer.hpp>

#ifdef __cplusplus
   extern "C" {
#endif

struct php_obj_MustacheLambdaHelper {
    mustache::Renderer * renderer;
    zend_object std;
};

extern zend_class_entry * MustacheLambdaHelper_ce_ptr;

struct php_obj_MustacheLambdaHelper * php_mustache_lambda_helper_object_fetch_object(zval * zv);

extern PHP_MINIT_FUNCTION(mustache_lambda_helper);

extern PHP_METHOD(MustacheLambdaHelper, __construct);
extern PHP_METHOD(MustacheLambdaHelper, render);

#ifdef __cplusplus
  } // extern "C"
#endif

#endif /* PHP_MUSTACHE_LAMBDA_HELPER_HPP */

