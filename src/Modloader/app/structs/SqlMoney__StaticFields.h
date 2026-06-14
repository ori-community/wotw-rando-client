#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SqlMoney__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SqlMoney__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlMoney__StaticFields_DEFINED)
#include <Modloader/app/structs/SqlMoney.h>
#if defined(IL2CPP_STRUCT_SqlMoney_DEFINED)
#define IL2CPP_STRUCT_SqlMoney__StaticFields_DEFINED
struct SqlMoney__StaticFields {
    int32_t s_iMoneyScale;
    int64_t s_lTickBase;
    double s_dTickBase;
    int64_t s_minLong;
    int64_t s_maxLong;
    struct SqlMoney Null;
    struct SqlMoney Zero;
    struct SqlMoney MinValue;
    struct SqlMoney MaxValue;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SqlMoney__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_SqlMoney__StaticFields_FWDDECL
#endif
#undef IL2CPP_STRUCT_SqlMoney__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlMoney__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_SqlMoney__StaticFields_FWDDECL)
#include <Modloader/app/structs/SqlMoney__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SqlMoney__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
