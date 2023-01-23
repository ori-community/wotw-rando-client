#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TradeInfo__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TradeInfo__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_TradeInfo__Array_DEFINED)
#define IL2CPP_STRUCT_TradeInfo__Array_DEFINED
struct TradeInfo__Array__Class;
struct TradeInfo;
struct TradeInfo__Array {
    struct TradeInfo__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct TradeInfo* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_TradeInfo__Array_FWDDECL)
#define IL2CPP_STRUCT_TradeInfo__Array_FWDDECL
#include <Modloader/app/structs/TradeInfo.h>
#include <Modloader/app/structs/TradeInfo__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_TradeInfo__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_TradeInfo__Array_DEFINED) && !defined(IL2CPP_STRUCT_TradeInfo__Array_FWDDECL)
#include <Modloader/app/structs/TradeInfo__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TradeInfo__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
