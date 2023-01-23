#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TransformProvider__Class.h>
#include <Modloader/app/structs/TransformProvider.h>

namespace app::classes::types {
    namespace TransformProvider {
        namespace {
            inline app::TransformProvider__Class* type_info_ref = nullptr;
        }
        inline app::TransformProvider__Class** type_info = &type_info_ref;
        inline app::TransformProvider__Class* get_class() {
            return il2cpp::get_class<app::TransformProvider__Class>(type_info, "", "TransformProvider");
        }
        inline app::TransformProvider* create() {
            return il2cpp::create_object<app::TransformProvider>(get_class());
        }
    } // namespace TransformProvider
} // namespace app::classes::types
