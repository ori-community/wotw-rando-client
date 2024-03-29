#pragma once
#include <Modloader/app/structs/UberShaderBuildUpdate_WorldProjectionUpdateEntry.h>
#include <Modloader/app/structs/UberShaderBuildUpdate_WorldProjectionUpdateEntry__Array.h>
#include <Modloader/app/structs/UberShaderBuildUpdate_WorldProjectionUpdateEntry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderBuildUpdate_WorldProjectionUpdateEntry {
        inline app::UberShaderBuildUpdate_WorldProjectionUpdateEntry__Class** type_info() {
            static app::UberShaderBuildUpdate_WorldProjectionUpdateEntry__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberShaderBuildUpdate_WorldProjectionUpdateEntry__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberShaderBuildUpdate_WorldProjectionUpdateEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::UberShaderBuildUpdate_WorldProjectionUpdateEntry__Class>(type_info(), "", "UberShaderBuildUpdate", "WorldProjectionUpdateEntry");
        }
        inline app::UberShaderBuildUpdate_WorldProjectionUpdateEntry* create() {
            return il2cpp::create_object<app::UberShaderBuildUpdate_WorldProjectionUpdateEntry>(get_class());
        }
        inline app::UberShaderBuildUpdate_WorldProjectionUpdateEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::UberShaderBuildUpdate_WorldProjectionUpdateEntry__Array>(get_class(), size);
        }
        inline app::UberShaderBuildUpdate_WorldProjectionUpdateEntry__Array* create_array(const std::vector<app::UberShaderBuildUpdate_WorldProjectionUpdateEntry*>& items) {
            return il2cpp::array_new<app::UberShaderBuildUpdate_WorldProjectionUpdateEntry__Array>(get_class(), items);
        }
    } // namespace UberShaderBuildUpdate_WorldProjectionUpdateEntry
} // namespace app::classes::types
