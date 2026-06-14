#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ValueToDateModel_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ValueToDateModel_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValueToDateModel_DEFINED)
#include <Modloader/app/structs/ValueToDateModel__Fields.h>
#if defined(IL2CPP_STRUCT_ValueToDateModel__Fields_DEFINED)
#define IL2CPP_STRUCT_ValueToDateModel_DEFINED
struct ValueToDateModel__Class;
struct ValueToDateModel {
    struct ValueToDateModel__Class* klass;
    MonitorData* monitor;
    struct ValueToDateModel__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ValueToDateModel_FWDDECL)
#define IL2CPP_STRUCT_ValueToDateModel_FWDDECL
#include <Modloader/app/structs/ValueToDateModel__Class.h>
#endif
#undef IL2CPP_STRUCT_ValueToDateModel_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValueToDateModel_DEFINED) && !defined(IL2CPP_STRUCT_ValueToDateModel_FWDDECL)
#include <Modloader/app/structs/ValueToDateModel.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ValueToDateModel.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
