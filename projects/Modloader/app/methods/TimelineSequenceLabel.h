#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::TimelineSequenceLabel {
    IL2CPP_REGISTER_METHOD(0x010F7A00, void, Awake, (app::TimelineSequenceLabel * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010F7B90, void, OnEnable, (app::TimelineSequenceLabel * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::TimelineSequenceLabel * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010F7CB0, void, OnDestroy, (app::TimelineSequenceLabel * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::TimelineSequenceLabel * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010F7D70, void, cctor, ())
} // namespace app::classes::TimelineSequenceLabel
