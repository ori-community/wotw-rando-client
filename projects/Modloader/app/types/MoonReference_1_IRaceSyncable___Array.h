#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonReference_1_IRaceSyncable___Array {
        namespace {
            inline app::MoonReference_1_IRaceSyncable___Array__Class* type_info_ref = nullptr;
        }
        inline app::MoonReference_1_IRaceSyncable___Array__Class** type_info = &type_info_ref;
        inline app::MoonReference_1_IRaceSyncable___Array__Class* get_class() {
            return il2cpp::get_class<app::MoonReference_1_IRaceSyncable___Array__Class>(type_info, "Moon", "MoonReference`1[IRaceSyncable][]");
        }
        inline app::MoonReference_1_IRaceSyncable___Array* create() {
            return il2cpp::create_object<app::MoonReference_1_IRaceSyncable___Array>(get_class());
        }
    } // namespace MoonReference_1_IRaceSyncable___Array
} // namespace app::classes::types
