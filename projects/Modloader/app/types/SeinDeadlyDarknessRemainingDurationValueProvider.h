#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinDeadlyDarknessRemainingDurationValueProvider__Class.h>
#include <Modloader/app/structs/SeinDeadlyDarknessRemainingDurationValueProvider.h>

namespace app::classes::types {
    namespace SeinDeadlyDarknessRemainingDurationValueProvider {
        namespace {
            inline app::SeinDeadlyDarknessRemainingDurationValueProvider__Class* type_info_ref = nullptr;
        }
        inline app::SeinDeadlyDarknessRemainingDurationValueProvider__Class** type_info = &type_info_ref;
        inline app::SeinDeadlyDarknessRemainingDurationValueProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinDeadlyDarknessRemainingDurationValueProvider__Class>(type_info, "", "SeinDeadlyDarknessRemainingDurationValueProvider");
        }
        inline app::SeinDeadlyDarknessRemainingDurationValueProvider* create() {
            return il2cpp::create_object<app::SeinDeadlyDarknessRemainingDurationValueProvider>(get_class());
        }
    } // namespace SeinDeadlyDarknessRemainingDurationValueProvider
} // namespace app::classes::types
