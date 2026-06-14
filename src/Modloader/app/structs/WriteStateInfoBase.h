#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WriteStateInfoBase_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WriteStateInfoBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_WriteStateInfoBase_DEFINED)
#include <Modloader/app/structs/WriteStateInfoBase__Fields.h>
#if defined(IL2CPP_STRUCT_WriteStateInfoBase__Fields_DEFINED)
#define IL2CPP_STRUCT_WriteStateInfoBase_DEFINED
struct WriteStateInfoBase__Class;
struct WriteStateInfoBase {
    struct WriteStateInfoBase__Class* klass;
    MonitorData* monitor;
    struct WriteStateInfoBase__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WriteStateInfoBase_FWDDECL)
#define IL2CPP_STRUCT_WriteStateInfoBase_FWDDECL
#include <Modloader/app/structs/WriteStateInfoBase__Class.h>
#endif
#undef IL2CPP_STRUCT_WriteStateInfoBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_WriteStateInfoBase_DEFINED) && !defined(IL2CPP_STRUCT_WriteStateInfoBase_FWDDECL)
#include <Modloader/app/structs/WriteStateInfoBase.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WriteStateInfoBase.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
