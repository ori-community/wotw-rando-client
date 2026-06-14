#pragma once
#include <Modloader/app/structs/UberAtlasPrewarmContainer.h>
#include <Modloader/app/structs/UberAtlasPrewarmContainer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberAtlasPrewarmContainer {
        inline app::UberAtlasPrewarmContainer__Class** type_info() {
            static app::UberAtlasPrewarmContainer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberAtlasPrewarmContainer__Class**)(modloader::win::memory::resolve_rva(0x0476EE40));
            }
            return cache;
        }
        inline app::UberAtlasPrewarmContainer__Class* get_class() {
            return il2cpp::get_class<app::UberAtlasPrewarmContainer__Class>(type_info(), "UberShader.optimizations.atlassing", "UberAtlasPrewarmContainer");
        }
        inline app::UberAtlasPrewarmContainer* create() {
            return il2cpp::create_object<app::UberAtlasPrewarmContainer>(get_class());
        }
    } // namespace UberAtlasPrewarmContainer
} // namespace app::classes::types
