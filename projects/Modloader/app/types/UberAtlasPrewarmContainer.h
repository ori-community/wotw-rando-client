#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberAtlasPrewarmContainer__Class.h>
#include <Modloader/app/structs/UberAtlasPrewarmContainer.h>

namespace app::classes::types {
    namespace UberAtlasPrewarmContainer {
        inline app::UberAtlasPrewarmContainer__Class** type_info = (app::UberAtlasPrewarmContainer__Class**)(modloader::win::memory::resolve_rva(0x0476EE40));
        inline app::UberAtlasPrewarmContainer__Class* get_class() {
            return il2cpp::get_class<app::UberAtlasPrewarmContainer__Class>(type_info, "UberShader.optimizations.atlassing", "UberAtlasPrewarmContainer");
        }
        inline app::UberAtlasPrewarmContainer* create() {
            return il2cpp::create_object<app::UberAtlasPrewarmContainer>(get_class());
        }
    } // namespace UberAtlasPrewarmContainer
} // namespace app::classes::types
