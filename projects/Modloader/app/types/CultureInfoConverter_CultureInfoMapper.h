#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CultureInfoConverter_CultureInfoMapper__Class.h>
#include <Modloader/app/structs/CultureInfoConverter_CultureInfoMapper.h>

namespace app::classes::types {
    namespace CultureInfoConverter_CultureInfoMapper {
        inline app::CultureInfoConverter_CultureInfoMapper__Class** type_info = (app::CultureInfoConverter_CultureInfoMapper__Class**)(modloader::win::memory::resolve_rva(0x0473E4A0));
        inline app::CultureInfoConverter_CultureInfoMapper__Class* get_class() {
            return il2cpp::get_nested_class<app::CultureInfoConverter_CultureInfoMapper__Class>(type_info, "System.ComponentModel", "CultureInfoConverter", "CultureInfoMapper");
        }
        inline app::CultureInfoConverter_CultureInfoMapper* create() {
            return il2cpp::create_object<app::CultureInfoConverter_CultureInfoMapper>(get_class());
        }
    } // namespace CultureInfoConverter_CultureInfoMapper
} // namespace app::classes::types
