#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RenderThreadWaker__Class.h>
#include <Modloader/app/structs/RenderThreadWaker.h>

namespace app::classes::types {
    namespace RenderThreadWaker {
        inline app::RenderThreadWaker__Class** type_info = (app::RenderThreadWaker__Class**)(modloader::win::memory::resolve_rva(0x0472BF60));
        inline app::RenderThreadWaker__Class* get_class() {
            return il2cpp::get_class<app::RenderThreadWaker__Class>(type_info, "usedStandaloneScripts", "RenderThreadWaker");
        }
        inline app::RenderThreadWaker* create() {
            return il2cpp::create_object<app::RenderThreadWaker>(get_class());
        }
    } // namespace RenderThreadWaker
} // namespace app::classes::types
