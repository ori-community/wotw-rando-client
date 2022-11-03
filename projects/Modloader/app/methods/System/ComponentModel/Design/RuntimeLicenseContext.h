#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::ComponentModel::Design::RuntimeLicenseContext {
    IL2CPP_REGISTER_METHOD(0x01FE3840, app::String*, GetLocalPath, (app::RuntimeLicenseContext * this_ptr, app::String* file_name))
    IL2CPP_REGISTER_METHOD(0x01FE39C0, app::String*, GetSavedLicenseKey, (app::RuntimeLicenseContext * this_ptr, app::Type* type, app::Assembly* resource_assembly))
    IL2CPP_REGISTER_METHOD(0x01FE4790, app::Stream*, CaseInsensitiveManifestResourceStreamLookup, (app::RuntimeLicenseContext * this_ptr, app::Assembly* satellite, app::String* name))
    IL2CPP_REGISTER_METHOD(0x01FE49C0, app::Stream*, OpenRead, (app::Uri * resource_uri))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::RuntimeLicenseContext * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FE4B60, void, cctor, ())
} // namespace app::classes::System::ComponentModel::Design::RuntimeLicenseContext
