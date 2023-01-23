#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MothSeekBehaviour__Class.h>
#include <Modloader/app/structs/MothSeekBehaviour.h>

namespace app::classes::types {
    namespace MothSeekBehaviour {
        namespace {
            inline app::MothSeekBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::MothSeekBehaviour__Class** type_info = &type_info_ref;
        inline app::MothSeekBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MothSeekBehaviour__Class>(type_info, "", "MothSeekBehaviour");
        }
        inline app::MothSeekBehaviour* create() {
            return il2cpp::create_object<app::MothSeekBehaviour>(get_class());
        }
    } // namespace MothSeekBehaviour
} // namespace app::classes::types
