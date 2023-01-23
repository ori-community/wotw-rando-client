#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/HighlightNearSein.h>

namespace app::classes::HighlightNearSein {
    IL2CPP_REGISTER_METHOD(0x00B55F20, void, OnNearSeinEnter, (app::HighlightNearSein * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B56060, void, OnNearSeinExit, (app::HighlightNearSein * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSeinNearStay, (app::HighlightNearSein * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::HighlightNearSein * this_ptr))
} // namespace app::classes::HighlightNearSein
