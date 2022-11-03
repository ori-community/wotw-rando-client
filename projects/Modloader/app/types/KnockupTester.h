#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace KnockupTester {
        namespace {
            inline app::KnockupTester__Class* type_info_ref = nullptr;
        }
        inline app::KnockupTester__Class** type_info = &type_info_ref;
        inline app::KnockupTester__Class* get_class() {
            return il2cpp::get_class<app::KnockupTester__Class>(type_info, "", "KnockupTester");
        }
        inline app::KnockupTester* create() {
            return il2cpp::create_object<app::KnockupTester>(get_class());
        }
    } // namespace KnockupTester
} // namespace app::classes::types
