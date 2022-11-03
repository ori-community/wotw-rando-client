#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IKSimple {
        namespace {
            inline app::IKSimple__Class* type_info_ref = nullptr;
        }
        inline app::IKSimple__Class** type_info = &type_info_ref;
        inline app::IKSimple__Class* get_class() {
            return il2cpp::get_class<app::IKSimple__Class>(type_info, "", "IKSimple");
        }
        inline app::IKSimple* create() {
            return il2cpp::create_object<app::IKSimple>(get_class());
        }
    } // namespace IKSimple
} // namespace app::classes::types
