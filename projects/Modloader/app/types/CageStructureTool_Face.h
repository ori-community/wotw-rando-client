#pragma once
#include <Modloader/app/structs/CageStructureTool_Face.h>
#include <Modloader/app/structs/CageStructureTool_Face__Array.h>
#include <Modloader/app/structs/CageStructureTool_Face__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CageStructureTool_Face {
        inline app::CageStructureTool_Face__Class** type_info() {
            static app::CageStructureTool_Face__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CageStructureTool_Face__Class**)(modloader::win::memory::resolve_rva(0x04790CC8));
            }
            return cache;
        }
        inline app::CageStructureTool_Face__Class* get_class() {
            return il2cpp::get_nested_class<app::CageStructureTool_Face__Class>(type_info(), "", "CageStructureTool", "Face");
        }
        inline app::CageStructureTool_Face* create() {
            return il2cpp::create_object<app::CageStructureTool_Face>(get_class());
        }
        inline app::CageStructureTool_Face__Array* create_array(int size) {
            return il2cpp::array_new<app::CageStructureTool_Face__Array>(get_class(), size);
        }
        inline app::CageStructureTool_Face__Array* create_array(const std::vector<app::CageStructureTool_Face*>& items) {
            return il2cpp::array_new<app::CageStructureTool_Face__Array>(get_class(), items);
        }
    } // namespace CageStructureTool_Face
} // namespace app::classes::types
