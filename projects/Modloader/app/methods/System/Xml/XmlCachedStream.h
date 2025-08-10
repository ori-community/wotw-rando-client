#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/Uri.h>
#include <Modloader/app/structs/XmlCachedStream.h>

namespace app::classes::System::Xml::XmlCachedStream {
    IL2CPP_REGISTER_METHOD(0x0195F000, void, ctor, app::XmlCachedStream* this_ptr, app::Uri* uri, app::Stream* stream)
}
