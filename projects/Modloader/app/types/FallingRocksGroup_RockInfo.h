#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FallingRocksGroup_RockInfo__Class.h>
#include <Modloader/app/structs/FallingRocksGroup_RockInfo.h>
#include <Modloader/app/structs/FallingRocksGroup_RockInfo__Array.h>

namespace app::classes::types {
    namespace FallingRocksGroup_RockInfo {
        inline app::FallingRocksGroup_RockInfo__Class** type_info = (app::FallingRocksGroup_RockInfo__Class**)(modloader::win::memory::resolve_rva(0x04731FB8));
        inline app::FallingRocksGroup_RockInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::FallingRocksGroup_RockInfo__Class>(type_info, "", "FallingRocksGroup", "RockInfo");
        }
        inline app::FallingRocksGroup_RockInfo* create() {
            return il2cpp::create_object<app::FallingRocksGroup_RockInfo>(get_class());
        }
        inline app::FallingRocksGroup_RockInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::FallingRocksGroup_RockInfo__Array>(get_class(), size);
        }
        inline app::FallingRocksGroup_RockInfo__Array* create_array(const std::vector<app::FallingRocksGroup_RockInfo*>& items) {
            return il2cpp::array_new<app::FallingRocksGroup_RockInfo__Array>(get_class(), items);
        }
    } // namespace FallingRocksGroup_RockInfo
} // namespace app::classes::types
