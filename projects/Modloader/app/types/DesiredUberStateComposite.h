#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DesiredUberStateComposite__Class.h>
#include <Modloader/app/structs/DesiredUberStateComposite.h>

namespace app::classes::types {
    namespace DesiredUberStateComposite {
        inline app::DesiredUberStateComposite__Class** type_info = (app::DesiredUberStateComposite__Class**)(modloader::win::memory::resolve_rva(0x04750288));
        inline app::DesiredUberStateComposite__Class* get_class() {
            return il2cpp::get_class<app::DesiredUberStateComposite__Class>(type_info, "", "DesiredUberStateComposite");
        }
        inline app::DesiredUberStateComposite* create() {
            return il2cpp::create_object<app::DesiredUberStateComposite>(get_class());
        }
    } // namespace DesiredUberStateComposite
} // namespace app::classes::types
