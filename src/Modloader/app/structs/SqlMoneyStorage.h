#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SqlMoneyStorage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SqlMoneyStorage_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlMoneyStorage_DEFINED)
#include <Modloader/app/structs/SqlMoneyStorage__Fields.h>
#if defined(IL2CPP_STRUCT_SqlMoneyStorage__Fields_DEFINED)
#define IL2CPP_STRUCT_SqlMoneyStorage_DEFINED
struct SqlMoneyStorage__Class;
struct SqlMoneyStorage {
    struct SqlMoneyStorage__Class* klass;
    MonitorData* monitor;
    struct SqlMoneyStorage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SqlMoneyStorage_FWDDECL)
#define IL2CPP_STRUCT_SqlMoneyStorage_FWDDECL
#include <Modloader/app/structs/SqlMoneyStorage__Class.h>
#endif
#undef IL2CPP_STRUCT_SqlMoneyStorage_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlMoneyStorage_DEFINED) && !defined(IL2CPP_STRUCT_SqlMoneyStorage_FWDDECL)
#include <Modloader/app/structs/SqlMoneyStorage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SqlMoneyStorage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
