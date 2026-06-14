#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TradeInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TradeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_TradeInfo_DEFINED)
#include <Modloader/app/structs/TradeInfo__Fields.h>
#if defined(IL2CPP_STRUCT_TradeInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_TradeInfo_DEFINED
struct TradeInfo__Class;
struct TradeInfo {
    struct TradeInfo__Class* klass;
    MonitorData* monitor;
    struct TradeInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TradeInfo_FWDDECL)
#define IL2CPP_STRUCT_TradeInfo_FWDDECL
#include <Modloader/app/structs/TradeInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_TradeInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_TradeInfo_DEFINED) && !defined(IL2CPP_STRUCT_TradeInfo_FWDDECL)
#include <Modloader/app/structs/TradeInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TradeInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
