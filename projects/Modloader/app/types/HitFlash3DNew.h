#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HitFlash3DNew__Class.h>
#include <Modloader/app/structs/HitFlash3DNew.h>

namespace app::classes::types {
    namespace HitFlash3DNew {
        inline app::HitFlash3DNew__Class** type_info = (app::HitFlash3DNew__Class**)(modloader::win::memory::resolve_rva(0x047770A8));
        inline app::HitFlash3DNew__Class* get_class() {
            return il2cpp::get_class<app::HitFlash3DNew__Class>(type_info, "", "HitFlash3DNew");
        }
        inline app::HitFlash3DNew* create() {
            return il2cpp::create_object<app::HitFlash3DNew>(get_class());
        }
    } // namespace HitFlash3DNew
} // namespace app::classes::types
