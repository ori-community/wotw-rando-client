#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExpandoClass__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExpandoClass__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExpandoClass__Fields_DEFINED)
#define IL2CPP_STRUCT_ExpandoClass__Fields_DEFINED
struct String__Array;
struct Dictionary_2_System_Int32_List_1_System_WeakReference_;
struct __declspec(align(8)) ExpandoClass__Fields {
    struct String__Array* _keys;
    int32_t _hashCode;
    struct Dictionary_2_System_Int32_List_1_System_WeakReference_* _transitions;
};
#endif
#if !defined(IL2CPP_STRUCT_ExpandoClass__Fields_FWDDECL)
#define IL2CPP_STRUCT_ExpandoClass__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_Int32_List_1_System_WeakReference_.h>
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_ExpandoClass__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExpandoClass__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ExpandoClass__Fields_FWDDECL)
#include <Modloader/app/structs/ExpandoClass__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExpandoClass__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
