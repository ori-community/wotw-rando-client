#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CCTextVerticalColorer {
        namespace {
            inline app::CCTextVerticalColorer__Class* type_info_ref = nullptr;
        }
        inline app::CCTextVerticalColorer__Class** type_info = &type_info_ref;
        inline app::CCTextVerticalColorer__Class* get_class() {
            return il2cpp::get_class<app::CCTextVerticalColorer__Class>(type_info, "", "CCTextVerticalColorer");
        }
        inline app::CCTextVerticalColorer* create() {
            return il2cpp::create_object<app::CCTextVerticalColorer>(get_class());
        }
    } // namespace CCTextVerticalColorer
} // namespace app::classes::types
