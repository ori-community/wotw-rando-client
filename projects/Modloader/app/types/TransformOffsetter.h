#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TransformOffsetter__Class.h>
#include <Modloader/app/structs/TransformOffsetter.h>

namespace app::classes::types {
    namespace TransformOffsetter {
        namespace {
            inline app::TransformOffsetter__Class* type_info_ref = nullptr;
        }
        inline app::TransformOffsetter__Class** type_info = &type_info_ref;
        inline app::TransformOffsetter__Class* get_class() {
            return il2cpp::get_class<app::TransformOffsetter__Class>(type_info, "", "TransformOffsetter");
        }
        inline app::TransformOffsetter* create() {
            return il2cpp::create_object<app::TransformOffsetter>(get_class());
        }
    } // namespace TransformOffsetter
} // namespace app::classes::types
