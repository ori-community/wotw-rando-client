#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SqlMoney__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SqlMoney__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlMoney__Boxed_DEFINED)
#include <Modloader/app/structs/SqlMoney.h>
#if defined(IL2CPP_STRUCT_SqlMoney_DEFINED)
#define IL2CPP_STRUCT_SqlMoney__Boxed_DEFINED
struct SqlMoney__Class;
struct SqlMoney__Boxed {
    struct SqlMoney__Class* klass;
    MonitorData* monitor;
    struct SqlMoney fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SqlMoney__Boxed_FWDDECL)
#define IL2CPP_STRUCT_SqlMoney__Boxed_FWDDECL
#include <Modloader/app/structs/SqlMoney__Class.h>
#endif
#undef IL2CPP_STRUCT_SqlMoney__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlMoney__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_SqlMoney__Boxed_FWDDECL)
#include <Modloader/app/structs/SqlMoney__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SqlMoney__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
