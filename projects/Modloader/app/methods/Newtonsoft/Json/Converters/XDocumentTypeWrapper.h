#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XDocumentTypeWrapper.h>
#include <Modloader/app/structs/XDocumentType.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Newtonsoft::Json::Converters::XDocumentTypeWrapper {
    IL2CPP_REGISTER_METHOD(0x004C1E90, void, ctor, (app::XDocumentTypeWrapper * this_ptr, app::XDocumentType* document_type))
    IL2CPP_REGISTER_METHOD(0x01A56E90, app::String*, get_Name, (app::XDocumentTypeWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0195B1D0, app::String*, get_System, (app::XDocumentTypeWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A56EB0, app::String*, get_Public, (app::XDocumentTypeWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A56ED0, app::String*, get_InternalSubset, (app::XDocumentTypeWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A56EF0, app::String*, get_LocalName, (app::XDocumentTypeWrapper * this_ptr))
} // namespace app::classes::Newtonsoft::Json::Converters::XDocumentTypeWrapper
