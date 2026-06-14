#pragma once
#include <Modloader/app/structs/KeyValuePair_2_Syste_Typ_Syste_Runtim_Serializatio_Formatter_Bina_TypeInformati___Arr__Cla.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Type_Syste_Runtim_Serializatio_Formatter_Binar_TypeInformatio___Arra.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KeyValuePair_2_System_Type_System_Runtime_Serialization_Formatters_Binary_TypeInformation___Array {
        inline app::KeyValuePair_2_System_Type_System_Runtime_Serialization_Formatters_Binary_TypeInformation___Array__Class** type_info() {
            static app::KeyValuePair_2_System_Type_System_Runtime_Serialization_Formatters_Binary_TypeInformation___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KeyValuePair_2_System_Type_System_Runtime_Serialization_Formatters_Binary_TypeInformation___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KeyValuePair_2_System_Type_System_Runtime_Serialization_Formatters_Binary_TypeInformation___Array__Class* get_class() {
            return il2cpp::get_class<app::KeyValuePair_2_System_Type_System_Runtime_Serialization_Formatters_Binary_TypeInformation___Array__Class>(type_info(), "System.Collections.Generic", "KeyValuePair`2[System.Type,System.Runtime.Serialization.Formatters.Binary.TypeInformation][]");
        }
        inline app::KeyValuePair_2_System_Type_System_Runtime_Serialization_Formatters_Binary_TypeInformation___Array* create() {
            return il2cpp::create_object<app::KeyValuePair_2_System_Type_System_Runtime_Serialization_Formatters_Binary_TypeInformation___Array>(get_class());
        }
    } // namespace KeyValuePair_2_System_Type_System_Runtime_Serialization_Formatters_Binary_TypeInformation___Array
} // namespace app::classes::types
