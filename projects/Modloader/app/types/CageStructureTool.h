#pragma once
#include <Modloader/app/structs/CageStructureTool.h>
#include <Modloader/app/structs/CageStructureTool__Array.h>
#include <Modloader/app/structs/CageStructureTool__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CageStructureTool {
        inline app::CageStructureTool__Class** type_info() {
            static app::CageStructureTool__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CageStructureTool__Class**)(modloader::win::memory::resolve_rva(0x047988F8));
            }
            return cache;
        }
        inline app::CageStructureTool__Class* get_class() {
            return il2cpp::get_class<app::CageStructureTool__Class>(type_info(), "", "CageStructureTool");
        }
        inline app::CageStructureTool* create() {
            return il2cpp::create_object<app::CageStructureTool>(get_class());
        }
        inline app::CageStructureTool__Array* create_array(int size) {
            return il2cpp::array_new<app::CageStructureTool__Array>(get_class(), size);
        }
        inline app::CageStructureTool__Array* create_array(const std::vector<app::CageStructureTool*>& items) {
            return il2cpp::array_new<app::CageStructureTool__Array>(get_class(), items);
        }
    } // namespace CageStructureTool
} // namespace app::classes::types
