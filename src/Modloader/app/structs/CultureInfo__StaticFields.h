#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CultureInfo__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CultureInfo__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CultureInfo__StaticFields_DEFINED)
#define IL2CPP_STRUCT_CultureInfo__StaticFields_DEFINED
struct CultureInfo;
struct Object;
struct Dictionary_2_System_Int32_System_Globalization_CultureInfo_;
struct Dictionary_2_System_String_System_Globalization_CultureInfo_;
struct CultureInfo__StaticFields {
    struct CultureInfo* invariant_culture_info;
    struct Object* shared_table_lock;
    struct CultureInfo* default_current_culture;
    struct CultureInfo* s_DefaultThreadCurrentUICulture;
    struct CultureInfo* s_DefaultThreadCurrentCulture;
    struct Dictionary_2_System_Int32_System_Globalization_CultureInfo_* shared_by_number;
    struct Dictionary_2_System_String_System_Globalization_CultureInfo_* shared_by_name;
    bool IsTaiwanSku;
};
#endif
#if !defined(IL2CPP_STRUCT_CultureInfo__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_CultureInfo__StaticFields_FWDDECL
#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_System_Globalization_CultureInfo_.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_Globalization_CultureInfo_.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_CultureInfo__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CultureInfo__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_CultureInfo__StaticFields_FWDDECL)
#include <Modloader/app/structs/CultureInfo__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CultureInfo__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
