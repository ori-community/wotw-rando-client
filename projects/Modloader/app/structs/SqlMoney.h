#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SqlMoney_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SqlMoney_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlMoney_DEFINED)
#define IL2CPP_STRUCT_SqlMoney_DEFINED
struct SqlMoney {
    bool _fNotNull;
    int64_t _value;
};
#endif
#if !defined(IL2CPP_STRUCT_SqlMoney_FWDDECL)
#define IL2CPP_STRUCT_SqlMoney_FWDDECL
#endif
#undef IL2CPP_STRUCT_SqlMoney_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlMoney_DEFINED) && !defined(IL2CPP_STRUCT_SqlMoney_FWDDECL)
#include <Modloader/app/structs/SqlMoney.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SqlMoney.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
