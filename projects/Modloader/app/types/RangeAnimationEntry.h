#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RangeAnimationEntry__Class.h>
#include <Modloader/app/structs/RangeAnimationEntry.h>

namespace app::classes::types {
    namespace RangeAnimationEntry {
        namespace {
            inline app::RangeAnimationEntry__Class* type_info_ref = nullptr;
        }
        inline app::RangeAnimationEntry__Class** type_info = &type_info_ref;
        inline app::RangeAnimationEntry__Class* get_class() {
            return il2cpp::get_class<app::RangeAnimationEntry__Class>(type_info, "Moon", "RangeAnimationEntry");
        }
        inline app::RangeAnimationEntry* create() {
            return il2cpp::create_object<app::RangeAnimationEntry>(get_class());
        }
    } // namespace RangeAnimationEntry
} // namespace app::classes::types
