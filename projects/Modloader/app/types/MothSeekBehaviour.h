#pragma once
#include <Modloader/app/structs/MothSeekBehaviour.h>
#include <Modloader/app/structs/MothSeekBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MothSeekBehaviour {
        inline app::MothSeekBehaviour__Class** type_info() {
            static app::MothSeekBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MothSeekBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MothSeekBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MothSeekBehaviour__Class>(type_info(), "", "MothSeekBehaviour");
        }
        inline app::MothSeekBehaviour* create() {
            return il2cpp::create_object<app::MothSeekBehaviour>(get_class());
        }
    } // namespace MothSeekBehaviour
} // namespace app::classes::types
