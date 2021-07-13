package wotw.web.bindings

import org.w3c.files.Blob

@JsModule("file-saver")
@JsNonModule
external fun saveAs (blob: Blob, filename: String): dynamic