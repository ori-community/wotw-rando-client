#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NormalizationTableUtil__Class.h>
#include <Modloader/app/structs/NormalizationTableUtil.h>

namespace app::classes::types {
    namespace NormalizationTableUtil {
        inline app::NormalizationTableUtil__Class** type_info = (app::NormalizationTableUtil__Class**)(modloader::win::memory::resolve_rva(0x04739BB8));
        inline app::NormalizationTableUtil__Class* get_class() {
            return il2cpp::get_class<app::NormalizationTableUtil__Class>(type_info, "Mono.Globalization.Unicode", "NormalizationTableUtil");
        }
        inline app::NormalizationTableUtil* create() {
            return il2cpp::create_object<app::NormalizationTableUtil>(get_class());
        }
    } // namespace NormalizationTableUtil
} // namespace app::classes::types
