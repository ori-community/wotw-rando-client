#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Receipts_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Receipts_INITIALIZING
#if !defined(IL2CPP_STRUCT_Receipts_DEFINED)
#include <Modloader/app/structs/Receipts__Fields.h>
#if defined(IL2CPP_STRUCT_Receipts__Fields_DEFINED)
#define IL2CPP_STRUCT_Receipts_DEFINED
struct Receipts__Class;
struct Receipts {
    struct Receipts__Class* klass;
    MonitorData* monitor;
    struct Receipts__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Receipts_FWDDECL)
#define IL2CPP_STRUCT_Receipts_FWDDECL
#include <Modloader/app/structs/Receipts__Class.h>
#endif
#undef IL2CPP_STRUCT_Receipts_INITIALIZING
#if !defined(IL2CPP_STRUCT_Receipts_DEFINED) && !defined(IL2CPP_STRUCT_Receipts_FWDDECL)
#include <Modloader/app/structs/Receipts.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Receipts.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
