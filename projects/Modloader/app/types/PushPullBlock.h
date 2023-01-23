#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PushPullBlock__Class.h>
#include <Modloader/app/structs/PushPullBlock.h>

namespace app::classes::types {
    namespace PushPullBlock {
        inline app::PushPullBlock__Class** type_info = (app::PushPullBlock__Class**)(modloader::win::memory::resolve_rva(0x04765E80));
        inline app::PushPullBlock__Class* get_class() {
            return il2cpp::get_class<app::PushPullBlock__Class>(type_info, "", "PushPullBlock");
        }
        inline app::PushPullBlock* create() {
            return il2cpp::create_object<app::PushPullBlock>(get_class());
        }
    } // namespace PushPullBlock
} // namespace app::classes::types
