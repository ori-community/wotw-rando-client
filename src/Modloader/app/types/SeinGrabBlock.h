#pragma once
#include <Modloader/app/structs/SeinGrabBlock.h>
#include <Modloader/app/structs/SeinGrabBlock__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinGrabBlock {
        inline app::SeinGrabBlock__Class** type_info() {
            static app::SeinGrabBlock__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinGrabBlock__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinGrabBlock__Class* get_class() {
            return il2cpp::get_class<app::SeinGrabBlock__Class>(type_info(), "", "SeinGrabBlock");
        }
        inline app::SeinGrabBlock* create() {
            return il2cpp::create_object<app::SeinGrabBlock>(get_class());
        }
    } // namespace SeinGrabBlock
} // namespace app::classes::types
