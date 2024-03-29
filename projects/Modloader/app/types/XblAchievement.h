#pragma once
#include <Modloader/app/structs/XblAchievement.h>
#include <Modloader/app/structs/XblAchievement__Array.h>
#include <Modloader/app/structs/XblAchievement__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XblAchievement {
        inline app::XblAchievement__Class** type_info() {
            static app::XblAchievement__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XblAchievement__Class**)(modloader::win::memory::resolve_rva(0x04745EB0));
            }
            return cache;
        }
        inline app::XblAchievement__Class* get_class() {
            return il2cpp::get_class<app::XblAchievement__Class>(type_info(), "XGamingRuntime", "XblAchievement");
        }
        inline app::XblAchievement* create() {
            return il2cpp::create_object<app::XblAchievement>(get_class());
        }
        inline app::XblAchievement__Array* create_array(int size) {
            return il2cpp::array_new<app::XblAchievement__Array>(get_class(), size);
        }
        inline app::XblAchievement__Array* create_array(const std::vector<app::XblAchievement*>& items) {
            return il2cpp::array_new<app::XblAchievement__Array>(get_class(), items);
        }
    } // namespace XblAchievement
} // namespace app::classes::types
