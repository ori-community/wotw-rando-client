#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinGrabBlock__Class.h>
#include <Modloader/app/structs/SeinGrabBlock.h>

namespace app::classes::types {
    namespace SeinGrabBlock {
        namespace {
            inline app::SeinGrabBlock__Class* type_info_ref = nullptr;
        }
        inline app::SeinGrabBlock__Class** type_info = &type_info_ref;
        inline app::SeinGrabBlock__Class* get_class() {
            return il2cpp::get_class<app::SeinGrabBlock__Class>(type_info, "", "SeinGrabBlock");
        }
        inline app::SeinGrabBlock* create() {
            return il2cpp::create_object<app::SeinGrabBlock>(get_class());
        }
    } // namespace SeinGrabBlock
} // namespace app::classes::types
