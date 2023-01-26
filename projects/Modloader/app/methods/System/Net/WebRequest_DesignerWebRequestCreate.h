#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WebRequest.h>
#include <Modloader/app/structs/Uri.h>
#include <Modloader/app/structs/WebRequest_DesignerWebRequestCreate.h>

namespace app::classes::System::Net::WebRequest_DesignerWebRequestCreate {
    IL2CPP_REGISTER_METHOD(0x021B8050, app::WebRequest*, Create, (app::WebRequest_DesignerWebRequestCreate * this_ptr, app::Uri* uri))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::WebRequest_DesignerWebRequestCreate * this_ptr))
} // namespace app::classes::System::Net::WebRequest_DesignerWebRequestCreate
