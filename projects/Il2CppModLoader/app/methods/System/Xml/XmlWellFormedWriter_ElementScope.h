#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Xml::XmlWellFormedWriter_ElementScope {
    IL2CPP_REGISTER_METHOD(0x001DB2C0, void, Set, (app::XmlWellFormedWriter_ElementScope__Boxed * this_ptr, app::String * prefix, app::String * local_name, app::String * namespace_uri, int32_t prev_n_s_top))
    IL2CPP_REGISTER_METHOD(0x001DB2F0, void, WriteEndElement, (app::XmlWellFormedWriter_ElementScope__Boxed * this_ptr, app::XmlRawWriter * raw_writer))
    IL2CPP_REGISTER_METHOD(0x001DB330, void, WriteFullEndElement, (app::XmlWellFormedWriter_ElementScope__Boxed * this_ptr, app::XmlRawWriter * raw_writer))
}
