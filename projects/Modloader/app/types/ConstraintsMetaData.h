#pragma once
#include <Modloader/app/structs/ConstraintsMetaData.h>
#include <Modloader/app/structs/ConstraintsMetaData__Array.h>
#include <Modloader/app/structs/ConstraintsMetaData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConstraintsMetaData {
        inline app::ConstraintsMetaData__Class** type_info() {
            static app::ConstraintsMetaData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ConstraintsMetaData__Class**)(modloader::win::memory::resolve_rva(0x04769C48));
            }
            return cache;
        }
        inline app::ConstraintsMetaData__Class* get_class() {
            return il2cpp::get_class<app::ConstraintsMetaData__Class>(type_info(), "Moon.Timeline", "ConstraintsMetaData");
        }
        inline app::ConstraintsMetaData* create() {
            return il2cpp::create_object<app::ConstraintsMetaData>(get_class());
        }
        inline app::ConstraintsMetaData__Array* create_array(int size) {
            return il2cpp::array_new<app::ConstraintsMetaData__Array>(get_class(), size);
        }
        inline app::ConstraintsMetaData__Array* create_array(const std::vector<app::ConstraintsMetaData*>& items) {
            return il2cpp::array_new<app::ConstraintsMetaData__Array>(get_class(), items);
        }
    } // namespace ConstraintsMetaData
} // namespace app::classes::types
