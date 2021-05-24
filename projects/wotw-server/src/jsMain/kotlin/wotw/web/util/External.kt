package wotw.web.util

import org.w3c.files.Blob

@JsModule("file-saver")
@JsNonModule
external fun saveAs (blob: Blob, filename: String): dynamic