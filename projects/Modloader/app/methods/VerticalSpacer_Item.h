#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IAlignable.h>
#include <Modloader/app/structs/VerticalSpacer_Item__Boxed.h>

namespace app::classes::VerticalSpacer_Item {
    IL2CPP_REGISTER_METHOD(0x0011ADC0, app::IAlignable*, get_Alignable, app::VerticalSpacer_Item__Boxed* this_ptr)
}
