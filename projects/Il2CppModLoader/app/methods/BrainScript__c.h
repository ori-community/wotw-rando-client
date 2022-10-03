#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::BrainScript___c {
    IL2CPP_REGISTER_METHOD(0x00D49F00, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::BrainScript_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D4A040, bool, _RemoveNullEntries_b__23_0, (app::BrainScript_c * this_ptr, app::LegacyTimelineSequence_SequenceEntry* a))
    IL2CPP_REGISTER_METHODINFO(0x04722A40, BrainScript_c__RemoveNullEntries_b__23_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00D4A050, bool, _RemoveEntriesWithNullAnimators_b__24_0, (app::BrainScript_c * this_ptr, app::LegacyTimelineSequence_SequenceEntry* a))
    IL2CPP_REGISTER_METHODINFO(0x04739260, BrainScript_c__RemoveEntriesWithNullAnimators_b__24_0__MethodInfo)
} // namespace app::classes::BrainScript___c
