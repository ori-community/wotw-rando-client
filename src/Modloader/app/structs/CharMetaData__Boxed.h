#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharMetaData__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharMetaData__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharMetaData__Boxed_DEFINED)
#include <Modloader/app/structs/CharMetaData.h>
#if defined(IL2CPP_STRUCT_CharMetaData_DEFINED)
#define IL2CPP_STRUCT_CharMetaData__Boxed_DEFINED
struct CharMetaData__Class;
struct CharMetaData__Boxed {
    struct CharMetaData__Class* klass;
    MonitorData* monitor;
    struct CharMetaData fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharMetaData__Boxed_FWDDECL)
#define IL2CPP_STRUCT_CharMetaData__Boxed_FWDDECL
#include <Modloader/app/structs/CharMetaData__Class.h>
#endif
#undef IL2CPP_STRUCT_CharMetaData__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharMetaData__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_CharMetaData__Boxed_FWDDECL)
#include <Modloader/app/structs/CharMetaData__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharMetaData__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
