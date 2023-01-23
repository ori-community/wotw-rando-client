#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HeaderAttribute__Class.h>
#include <Modloader/app/structs/HeaderAttribute.h>

namespace app::classes::types {
    namespace HeaderAttribute {
        namespace {
            inline app::HeaderAttribute__Class* type_info_ref = nullptr;
        }
        inline app::HeaderAttribute__Class** type_info = &type_info_ref;
        inline app::HeaderAttribute__Class* get_class() {
            return il2cpp::get_class<app::HeaderAttribute__Class>(type_info, "UnityEngine", "HeaderAttribute");
        }
        inline app::HeaderAttribute* create() {
            return il2cpp::create_object<app::HeaderAttribute>(get_class());
        }
    } // namespace HeaderAttribute
} // namespace app::classes::types
