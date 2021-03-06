//-------------------------------------------------------------------------------------------------------

#include <assert.h>
#include <stdio.h>

#include <slog/slog.h>
#include <settings/slog-sett.h>

//-------------------------------------------------------------------------------------------------------

// #define SLOG(lvl, flg, fmt, ...)
#define SLOG(lvl, flg, fmt, ...)				slog(lvl, flg, fmt, ## __VA_ARGS__)

//-------------------------------------------------------------------------------------------------------

#undef ASSERT
#define ASSERT(x)               				assert(x)

//-------------------------------------------------------------------------------------------------------

/// Use inverted functions
#define DUKPT_USE_INVERTED

//-------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------
