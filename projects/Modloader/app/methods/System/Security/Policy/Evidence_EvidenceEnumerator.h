#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Evidence_EvidenceEnumerator.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Security::Policy::Evidence_EvidenceEnumerator {
    IL2CPP_REGISTER_METHOD(0x01E1BFA0, void, ctor, app::Evidence_EvidenceEnumerator* this_ptr, app::IEnumerator* hostenum, app::IEnumerator* assemblyenum)
    IL2CPP_REGISTER_METHOD(0x01E1BFB0, bool, MoveNext, app::Evidence_EvidenceEnumerator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E1C070, void, Reset, app::Evidence_EvidenceEnumerator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E1C130, app::Object*, get_Current, app::Evidence_EvidenceEnumerator* this_ptr)
} // namespace app::classes::System::Security::Policy::Evidence_EvidenceEnumerator
