#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TentacleInterestPoint__Array {
        namespace {
            inline app::TentacleInterestPoint__Array__Class* type_info_ref = nullptr;
        }
        inline app::TentacleInterestPoint__Array__Class** type_info = &type_info_ref;
        inline app::TentacleInterestPoint__Array__Class* get_class() {
            return il2cpp::get_class<app::TentacleInterestPoint__Array__Class>(type_info, "", "TentacleInterestPoint[]");
        }
        inline app::TentacleInterestPoint__Array* create() {
            return il2cpp::create_object<app::TentacleInterestPoint__Array>(get_class());
        }
    } // namespace TentacleInterestPoint__Array
} // namespace app::classes::types
