#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AlignSplineToVerletStructure {
        namespace {
            inline app::AlignSplineToVerletStructure__Class* type_info_ref = nullptr;
        }
        inline app::AlignSplineToVerletStructure__Class** type_info = &type_info_ref;
        inline app::AlignSplineToVerletStructure__Class* get_class() {
            return il2cpp::get_class<app::AlignSplineToVerletStructure__Class>(type_info, "", "AlignSplineToVerletStructure");
        }
        inline app::AlignSplineToVerletStructure* create() {
            return il2cpp::create_object<app::AlignSplineToVerletStructure>(get_class());
        }
    } // namespace AlignSplineToVerletStructure
} // namespace app::classes::types
