/*
 * Copyright (c) 2016 Docker Inc
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#include <stdint.h>
#include <caml/mlvalues.h>
#include <caml/memory.h>
#include <caml/fail.h>
#include <caml/bigarray.h>

/* string -> t */
CAMLprim value stub_named_pipe_create(value path) {
  CAMLparam1(path);
#ifdef WIN32
  caml_failwith("Not implemented");
#else
  caml_failwith("Not implemented");
#endif
  CAMLreturn(0);
}

/* t -> bool */
CAMLprim value stub_named_pipe_connect(value path) {
  CAMLparam1(path);
#ifdef WIN32
  caml_failwith("Not implemented");
#else
  caml_failwith("Not implemented");
#endif
  CAMLreturn(0);
}

/* t -> unit */
CAMLprim value stub_named_pipe_flush(value path) {
  CAMLparam1(path);
#ifdef WIN32
  caml_failwith("Not implemented");
#else
  caml_failwith("Not implemented");
#endif
  CAMLreturn(0);
}

/* t -> unit */
CAMLprim value stub_named_pipe_disconnect(value path) {
  CAMLparam1(path);
#ifdef WIN32
  caml_failwith("Not implemented");
#else
  caml_failwith("Not implemented");
#endif
  CAMLreturn(0);
}

/* t -> unit */
CAMLprim value stub_named_pipe_destroy(value path) {
  CAMLparam1(path);
#ifdef WIN32
  caml_failwith("Not implemented");
#else
  caml_failwith("Not implemented");
#endif
  CAMLreturn(0);
}
