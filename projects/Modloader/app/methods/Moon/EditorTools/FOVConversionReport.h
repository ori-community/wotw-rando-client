#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FOVConversionReport.h>
#include <Modloader/app/structs/GameObject.h>

namespace app::classes::Moon::EditorTools::FOVConversionReport {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanRemoveObject, (app::FOVConversionReport * this_ptr, app::GameObject* target))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, DoStrip, (app::FOVConversionReport * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01207B80, void, ctor, (app::FOVConversionReport * this_ptr))
} // namespace app::classes::Moon::EditorTools::FOVConversionReport
